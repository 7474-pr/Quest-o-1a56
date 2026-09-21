$root = 'c:\Users\pedro\OneDrive\Documentos\codigo .c'
$start = [datetime]'2026-09-01'
$end = [datetime]'2026-09-21'

$files = Get-ChildItem -Path $root -File | Where-Object { $_.Name -match '^questao.*\.c$' }

foreach ($file in $files) {
    $text = [System.IO.File]::ReadAllText($file.FullName)
    $text = [regex]::Replace($text, '(?s)^/\*.*?\*/\s*', '', 1)

    $base = $file.BaseName
    if ($base -match '^questao(\d+)$') {
        $num = $matches[1]
    } else {
        $num = ($base -replace '^questao', '')
    }

    $days = ($end - $start).Days
    $rand = Get-Random -Minimum 0 -Maximum ($days + 1)
    $date = $start.AddDays($rand).ToString('dd/MM/yyyy')

    $header = @"
/*
Autor: Pedro H. Ludwinski
Questao: $num
Descricao: Programa em C que resolve o exercicio da questao $num, descrevendo a logica necessaria para alcancar a solucao proposta e demonstrar o objetivo do problema.
Data: $date
*/

"@

    [System.IO.File]::WriteAllText($file.FullName, ($header + $text), [System.Text.UTF8Encoding]::new($false))
}

Write-Output "Arquivos processados: $($files.Count)"
