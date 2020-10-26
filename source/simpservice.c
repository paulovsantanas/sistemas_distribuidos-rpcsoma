/* Definition of the remote add and subtract procedure used by 
   simple RPC example 
   rpcgen will create a template for you that contains much of the code
   needed in this file is you give it the "-Ss" command line arg.
*/
#include <stdio.h>
#include "simp.h"

/* Here is the actual remote procedure */
/* The return value of this procedure must be a pointer to int! */
/* we declare the variable result as static so we can return a 
   pointer to it */

float *
add_1_svc(operands *argp, struct svc_req *rqstp) {
    static float result;

    printf("Got request: adding %f, %f\n",
           argp->x, argp->y);

    result = argp->x + argp->y;


    return (&result);
}


float *
sub_1_svc(operands *argp, struct svc_req *rqstp) {
    static float result;

    printf("Got request: subtracting %f, %f\n",
           argp->x, argp->y);

    result = argp->x - argp->y;


    return (&result);
}

float *
multi_1_svc(operands *argp, struct svc_req *rqstp) {
    static float result;

    printf("Got request: multiplying %f, %f\n",
           argp->x, argp->y);

    result = argp->x * argp->y;


    return (&result);
}

float *
div_1_svc(operands *argp, struct svc_req *rqstp) {
    static float result;

    printf("Got request: dividing %f, %f\n",
           argp->x, argp->y);

    result = argp->x / argp->y;


    return (&result);
};



