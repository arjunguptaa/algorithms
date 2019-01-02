#include<stdio.h>
void main() {
int l;
scanf("%d",&l);
int i,m,n,j,a[l];
for (i = 0; i < l; i++) {
    scanf("%d",&a[i]);
}
for (j = 0; j < l - 1; j++) {
        if (a[j] > a[j + 1]) {

   	    for (m = j; m >= 0; m--) {
		if (a[m+1]<a[m]) {
		    a[m] = a[m+1] + a[m];
  		    a[m+1] = a[m] - a[m+1];
		    a[m] = a[m] - a[m+1];
		}
	    }
	}
}
for (n = 0; n < l; n++) {
printf("%d ",a[n]);
}
}

