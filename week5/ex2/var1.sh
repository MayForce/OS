if [ ! -f ex2 ]; then
    echo 0 > ex2
fi
   
for i in 1 2 3 4 5 6 7 8 9 10
do
    echo $(($((`tail -1 ex2`))+1)) >> ex2
done
 
