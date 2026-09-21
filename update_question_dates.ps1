$root = 'c:\Users\pedro\OneDrive\Documentos\codigo .c'
$start = [datetime]'2026-09-01'
$files = Get-ChildItem -Path $root -File | Where-Object { $_.Name -match '^questao.*\.c$' }

foreach ($file in $files) {
    $text = [System.IO.File]::ReadAllText($file.FullName)
    $descriptionMatch = [regex]::Match($text, '(?m)^Descricao:\s*(.+)$')
    $text = [regex]::Replace($text, '(?s)^/\*.*?\*/\s*', '', 1)

    $base = $file.BaseName
    if ($base -match '^questao(\d+)$') {
        $num = $matches[1]
    } else {
        $num = ($base -replace '^questao', '')
    }

    if ($descriptionMatch.Success) {
        $description = $descriptionMatch.Groups[1].Value
    } else {
        $description = "Programa em C referente a questao $num."
    }

    $day = Get-Random -Minimum 1 -Maximum 22
    $date = $start.AddDays($day - 1).ToString('dd/MM/yyyy')

    $header = @"
/*
Autor: Pedro H. Ludwinski
Questao: $num
Descricao: $description
Data: $date
*/

"@

    [System.IO.File]::WriteAllText($file.FullName, $header + $text, [System.Text.UTF8Encoding]::new($false))
}

Write-Output "Arquivos atualizados: $($files.Count)"
