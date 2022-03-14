double calculate (double num1, char operat, double num2)
{
    switch(operat){
        case '+': 
            return num1+num2;
            break;
        case '-': 
            return num1-num2;
            break;
        case '/': 
            return num1/num2;
            break;
        case '*': 
            return num1*num2;
            break;
    }
}