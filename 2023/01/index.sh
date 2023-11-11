# !/bin/sh
file_contents=$(<./message_01.txt)
IFS=' ' read -ra string_array <<<$(echo "$file_contents" | tr '[:upper:]' '[:lower:]')
declare -A dictionary
order=()
for word in "${string_array[@]}"; do
    if [ -n "${dictionary[$word]}" ]; then
        ((dictionary["$word"]++))
    else
        dictionary["$word"]=1
        order+=("$word")
    fi
done
for key in "${order[@]}"; do
    echo -n "$key${dictionary[$key]}"
done
echo ""