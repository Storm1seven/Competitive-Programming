python3 generator.py > input3.txt
python3 chefrail.py < input3.txt > output1.txt
./chefrailB < input3.txt > output2.txt
echo "output1"
cat output1.txt
echo ""
echo "output2"
cat output2.txt
echo ""
diff output1.txt output2.txt