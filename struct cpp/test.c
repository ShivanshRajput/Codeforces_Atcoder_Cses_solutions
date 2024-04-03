#include <stdio.h>
int main()
{
    int t;
	scanf("%d",&t);
	while (t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if (2*x<=y){
	        printf("%d\n",5*x);
	    }
	    else {
	        printf("%d\n",2*y+x);
	    }
	}
    return 0;
}