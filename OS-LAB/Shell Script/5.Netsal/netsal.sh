echo "enter basic salary"
read bs
hra=`expr $bs \* 10 \/ 100`;
ta=`expr $bs \* 15 \/ 100`;
da=`expr $bs \* 2 \/ 100`; 
tax=`expr $bs \* 5 \/ 100`; 
pf=`expr $bs \* 10 \/ 100`; 
add=`expr $hra + $ta + $da`; 
ded=`expr  $tax  +  $pf` 
netsal=`expr $bs + $add - $ded` 
#da=`expr $sal \* 40 \/ 100`;
#hra=`expr $sal \* 20 \/ 100`;
echo  "net  salary  is  $netsal";

