#/usr/bin/env python3
import re

def add_utf8_comments(file_path):
    with open(file_path, 'r', encoding='utf-8') as file:
        lines = file.readlines()

    updated_lines = []
    utf8_pattern = re.compile(r'UTF8\((U_[0-9A-Fa-f]{4})')

    for line in lines:
        match = utf8_pattern.search(line)
        if match:
            unicode_point = match.group(1)[2:]  # Extrahiere "03A9" aus "U_03A9"
            utf8_char = chr(int(unicode_point, 16))  # Konvertiere nach UTF-8
            if not line.strip().endswith(f"// {utf8_char}"):  # Verhindere doppelte Kommentare
                line = line.rstrip() + f"\t// {utf8_char}\n"
        updated_lines.append(line)

    with open(file_path, 'w', encoding='utf-8') as file:
        file.writelines(updated_lines)

# Pfad zur Datei anpassen
file_path = 'utf8.h'
add_utf8_comments(file_path)
