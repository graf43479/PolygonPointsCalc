//=============================================================================
//
// Code generated by [VAPS XT 4.0.1]
//
//=============================================================================

#ifndef VXTCLSPOLYGONPOINTSCALC_H
#define VXTCLSPOLYGONPOINTSCALC_H

//=============================================================================
//                        I N C L U D E   F I L E S
//=============================================================================

#include "vxtBaseClsPolygonPointsCalc.h"
#include "vxtRTCodedCalculator.h"
#include "vxtRTPropIdPath.h"
#include "vxtRTTopContext.h"
#include "vxtRTTypes.h"
#include "vxtRTValue.h"
#include "vxtTypCoord.h"


//=============================================================================
//                                C L A S S
//=============================================================================

class VXTCLSPOLYGONPOINTSCALC_SPEC vxtClsPolygonPointsCalc : public vxtBaseClsPolygonPointsCalc
{
   
   
public:

 

   
   explicit vxtClsPolygonPointsCalc(const InitData &a_rInitData);

   virtual ~vxtClsPolygonPointsCalc();

   virtual void vExecuteOperation(const vxtRTTopContext &a_rTopContext, vxtUShort a_OperationId, const vxtRTValue &a_rOperationData);

private:

	virtual void vUpdate(const vxtRTTopContext &a_rTopContext);

	static void s_Calculate(vxtTypCoord p1, vxtTypCoord p2, vxtFloat r1, vxtFloat r2);
	static void s_Calculate(vxtTypCoord p1, vxtTypCoord p2, vxtFloat r1, vxtFloat r2, vxtTypCoord p00, vxtTypCoord p01, vxtTypCoord p10, vxtTypCoord p11);

	static void point_search(vxtFloat x1, vxtFloat x2, vxtFloat y1, vxtFloat y2, vxtFloat r1, vxtFloat r2, vxtFloat *x01, vxtFloat *x02, vxtFloat *x03, vxtFloat *x04, vxtFloat *y01, vxtFloat *y02, vxtFloat *y03, vxtFloat *y04);

	static vxtTypCoord ProcessPoint(vxtFloat x, vxtInt y);

   // Disallow copy
   vxtClsPolygonPointsCalc( const vxtClsPolygonPointsCalc& );
   vxtClsPolygonPointsCalc& operator=( const vxtClsPolygonPointsCalc& );
};


#endif // VXTCLSPOLYGONPOINTSCALC_H

// END OF FILE

