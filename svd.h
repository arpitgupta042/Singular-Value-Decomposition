/*  svd.h  (C) 1997 Mark A. Livingston, Shankar Krishnan */
/* Any non-commercial use of this code is permitted so long as */
/* the above copyright line appears in the file.  Please contact */
/* the author regarding permission for commercial use. */
#define __SGI

/* The only C routine in svd.c that should be called */
void call_svd( q_matrix_type mat, int m, int n, q_matrix_type u,
	       q_type s, q_matrix_type v );

/* The ForTran prototype, needed only in svd.c */
#ifdef __SGI
void dsvdc_( double *a, int *lda, int *m, int *n, double *s, double *e,
	     double *u, int *ldu, double *vt, int *ldvt, double *work,
	     int *job, int *ierr );
#else
void dsvdc( double *a, int *lda, int *m, int *n, double *s, double *e,
	    double *u, int *ldu, double *vt, int *ldvt, double *work,
	    int *job, int *ierr );
#endif

