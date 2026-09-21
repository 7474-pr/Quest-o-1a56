import re
from pathlib import Path

root = Path(r"c:\Users\pedro\OneDrive\Documentos\codigo .c")
files = sorted(root.glob("questao*.c"))

for f in files:
    text = f.read_text(encoding="utf-8", errors="surrogateescape")
    text = re.sub(r"(?s)^/\*.*?\*/\s*", "", text, count=1)
    num = re.sub(r"^questao", "", f.stem)
    header = (
        "/*\n"
        "Autor: Pedro H. Ludwinski\n"
        f"Questao: {num}\n"
        f"Descricao: Programa em C que resolve o exercicio da questao {num}, descrevendo a logica necessaria para alcancar a solucao proposta e demonstrar o objetivo do problema.\n"
        "Datas: 05/09/2026, 14/09/2026, 20/09/2026\n"
        "*/\n\n"
    )
    f.write_text(header + text, encoding="utf-8", newline="\n")

print(f"Arquivos processados: {len(files)}")
