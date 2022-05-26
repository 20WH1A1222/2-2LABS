echo -n "Number : "
read num;

for i in $(seq 0 $num)
do
   if [ $(expr $i % 2) == 0 ]
   then
        echo $i
   fi
done


