/*

   BLIS    
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2013, The University of Texas

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name of The University of Texas nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef BLIS_RANDS_H
#define BLIS_RANDS_H

// rands


#define bli_srands( a ) \
{ \
	(a) = ( float  ) (   ( double ) rand() / \
	                   ( ( double ) RAND_MAX / 2.0 ) \
	                 ) - 1.0F; \
}
#define bli_drands( a ) \
{ \
	(a) = ( double ) (   ( double ) rand() / \
	                   ( ( double ) RAND_MAX / 2.0 ) \
	                 ) - 1.0; \
}
#define bli_crands( a ) \
{ \
	float  ar, ai; \
\
	bli_srands( ar ); \
	bli_srands( ai ); \
\
	bli_csets( ar, ai, (a) ); \
}
#define bli_zrands( a ) \
{ \
	double ar, ai; \
\
	bli_drands( ar ); \
	bli_drands( ai ); \
\
	bli_zsets( ar, ai, (a) ); \
}


#endif

