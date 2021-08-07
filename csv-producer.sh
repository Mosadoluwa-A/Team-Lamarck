#!/bin/bash
git clone https://github.com/Mosadoluwa-A/Team-Lamarck
cd Team-Lamarck

echo "Running compilers for C and C++"
ls *.c| parallel gcc -o {.}.c-program {};
ls *.cpp| parallel g++ -o {.}.cpp-program {};

echo "Time for main scripts"
ls *.py|parallel "python3 {} |awk -F': ' ' {print \$0}' |paste -sd ',' >>team_lamarck.csv"
ls *.js|parallel "node {} |awk -F': ' ' {print \$0}' |paste -sd ','>>team_lamarck.csv "
ls *.R|parallel "Rscript {} |awk -F': ' ' {print \$0}'|paste -sd  ','>>team_lamarck.csv "
ls *.java|parallel "java {} |awk -F': ' ' {print \$0}'|paste -sd ','>>team_lamarck.csv "
ls *.swift|parallel "swift {} |awk -F': ' ' {print \$0}' |paste -sd ','>>team_lamarck.csv"
ls *.php|parallel "php {} |awk -F': ' ' {print \$0}' |paste -sd ','>>team_lamarck.csv"
ls *.c-program|parallel "./{} |awk -F': ' ' {print \$0}' |paste -sd ',' >>team_lamarck.csv"
ls *.cpp-program|parallel "./{} |awk -F': ' ' {print \$0}' |paste -sd ','>>team_lamarck.csv"

echo "Removing the temporary c files"
rm  *.cpp-program
rm  *.c-program

echo "Go Team Lamarck!"
