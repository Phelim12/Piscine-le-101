ldapsearch -Q | grep "cn: " | cut -d' ' -f3 | grep -ci "bon"