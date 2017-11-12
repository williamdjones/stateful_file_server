/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "sum.h"

bool_t
xdr_range_in (XDR *xdrs, range_in *objp)
{
	register int32_t *buf;

	 if (!xdr_long (xdrs, &objp->min))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->max))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_sum_out (XDR *xdrs, sum_out *objp)
{
	register int32_t *buf;

	 if (!xdr_long (xdrs, &objp->result))
		 return FALSE;
	return TRUE;
}
