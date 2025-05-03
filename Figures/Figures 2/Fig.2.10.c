#include<stdio.h>

int main(){
	
	printf("Operator(s)\t\tOperation(s)\t\tOrder of evaluation(precedence)\n");
	printf("( )\t\t\tParentheses\t\tEvaluated first. If the parentheses are nested,\n");
	printf("\t\t\t\t\t\tthe expression in the innermost pair is evalu-\n");
	printf("\t\t\t\t\t\tated first. If there are several pars of parenthe-\n");
	printf("\t\t\t\t\t\tses \"on the same level\" (i.e., not nested),\n");
	printf("\t\t\t\t\t\tthey're evaluated left to right.\n");
	printf("*\t\t\tMultiplication\t\tEvaluated second. If there are several, they're\n");
	printf("/\t\t\tDivision\t\tevaluated left to right.\n");
	printf("%%\t\t\tRemainder\t\t\n");
	printf("+\t\t\tAddition\t\tEvaluated last. If there are several, they're eval-\n");
	printf("-\t\t\tSubtraction\t\tuated left to right.\n");
	return 0;
}
