# g++ inputGenerator.cpp -o b && ./b >input.txt

g++ code.cpp -o b && ./b <input.txt >output.txt && cat output.txt
g++ ans.cpp -o b && ./b <input.txt >ans.txt

echo ''
echo "*** diff res ***"
diffres=$(diff ans.txt output.txt)
echo "$diffres"