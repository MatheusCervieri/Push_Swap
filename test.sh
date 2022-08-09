make
echo "2 numbers -----------------------------------!"
echo "2 numbers - new test"
ARG=$(shuf -i 0-1000 -n 2) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "3 numbers -----------------------------------!"
echo "3 numbers - new test"
ARG=$(shuf -i 0-1000 -n 3) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "5 numbers -----------------------------------!"
echo "5 numbers - new test"
ARG=$(shuf -i 0-1000 -n 5) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "5 numbers - new test"
ARG=$(shuf -i 0-1000 -n 5) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "5 numbers - new test"
ARG=$(shuf -i 0-1000 -n 5) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "100 numbers -----------------------------------!"
echo "100 numbers - new test"
ARG=$(shuf -i 0-1000 -n 100) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "100 numbers - new test"
ARG=$(shuf -i 0-1000 -n 100) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "100 numbers - new test"
ARG=$(shuf -i 0-1000 -n 100) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "500 numbers -----------------------------------!"
echo "500 numbers - new test"
ARG=$(shuf -i 0-1000 -n 500) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "500 numbers - new test"
ARG=$(shuf -i 0-1000 -n 500) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "500 numbers - new test"
ARG=$(shuf -i 0-1000 -n 500) 
echo "Moviments:"
./push_swap $ARG | wc -l
echo "Result:"
./push_swap $ARG | ./checker_linux $ARG
echo "Valgrind --------------"
ARG=$(shuf -i 0-1000 -n 2) 
valgrind --leak-check=full --show-leak-kinds=all ./push_swap $ARG
ARG=$(shuf -i 0-1000 -n 3) 
valgrind --leak-check=full --show-leak-kinds=all ./push_swap $ARG

#ARG=$(shuf -i 0-1000 -n 100) 
#valgrind --leak-check=full --show-leak-kinds=all ./push_swap $ARG
#ARG=$(shuf -i 0-1000 -n 500) 
#valgrind --leak-check=full --show-leak-kinds=all ./push_swap $ARG

