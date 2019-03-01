//=============================================================================
//
// Code generated by [VAPS XT 4.0.1]
//
//=============================================================================

//=============================================================================
//                        I N C L U D E   F I L E S
//=============================================================================

#include "sqxObjPluginFactory.h"

#include "vxtClsPolygonPointsCalcPlugin.h"

//=======<vxtClsPolygonPointsCalcPlugin::vxtClsPolygonPointsCalcPlugin>========
// 
//  Summary: Constructor of the 'vxtClsPolygonPointsCalcPlugin' class.
// 
//  Return Value: None.
// 
//=============================================================================
vxtClsPolygonPointsCalcPlugin::vxtClsPolygonPointsCalcPlugin(const vxtChar *a_pGUIName, vxtFloat a_Priority)
: sqxQPlugin(a_pGUIName, a_Priority)
{
}

//=======<vxtClsPolygonPointsCalcPlugin::~vxtClsPolygonPointsCalcPlugin>=======
// 
//  Summary: Destructor of the 'vxtClsPolygonPointsCalcPlugin' class.
// 
//  Return Value: None.
// 
//=============================================================================
vxtClsPolygonPointsCalcPlugin::~vxtClsPolygonPointsCalcPlugin()
{
}

//==============================<sqxQPluginLoad>===============================
// 
//  Summary: The plugin load function, entry point to the plugin dll.
//           Creates a new plugin.
// 
//  Return Value: A pointer to the newly created plugin.
// 
//=============================================================================
sqxQPlugin * sqxQPluginLoad()
{
   return VXT_NEW(vxtClsPolygonPointsCalcPlugin, (vxtClsPolygonPointsCalc::CLASS_NAME, 1));
}

//========================<sqxQPluginProductAPIVersion>========================
// 
//  Summary: Retrieves the product API version.
// 
//  Return Value: The product API version string.
// 
//=============================================================================
const vxtChar * sqxQPluginProductAPIVersion()
{
   return SQX_PLUGIN_PRODUCT_API_VERSION;
}

//=================<vxtClsPolygonPointsCalcPlugin::Initialize>=================
// 
//  Summary: Called by the plugins loader to initialize the plugin.
// 
//  Return Value: VXT_TRUE or VXT_FALSE.
// 
//=============================================================================
vxtBool vxtClsPolygonPointsCalcPlugin::Initialize(void* a_pContext)
{
   sqxObjPluginFactory *pFactory = static_cast<sqxObjPluginFactory *>(a_pContext);
   pFactory->SetCreateRTObjFcn(vxtClsPolygonPointsCalcPlugin::s_pCreateRTObject);
   pFactory->SetDeleteRTObjFcn(vxtClsPolygonPointsCalcPlugin::s_vDeleteRTObject);
   vxtUShort NumProps;
   const vxtRTProperty *pPropInfo = vxtClsPolygonPointsCalc::aGetPropInfo(NumProps);
   pFactory->vSetPropInfo(pPropInfo, NumProps);
   const vxtChar *pDepTypeDescr = vxtClsPolygonPointsCalc::pGetDependentTypesDescriptor();
   pFactory->vSetDependentTypesDescriptor(pDepTypeDescr);
   return VXT_TRUE;
}

//==================<vxtClsPolygonPointsCalcPlugin::vCleanUp>==================
// 
//  Summary: Called by the plugins loader to clean up the plugin.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtClsPolygonPointsCalcPlugin::vCleanUp(void*)
{
}

//=============<vxtClsPolygonPointsCalcPlugin::s_pCreateRTObject>==============
// 
//  Summary: Create a RunTime Built Object.
// 
//  Return Value: A pointer to the new RunTime Object.
// 
//=============================================================================
vxtRTObject * vxtClsPolygonPointsCalcPlugin::s_pCreateRTObject(const void *a_pInitData)
{
   static const vxtBaseClsPolygonPointsCalc::InitData s_DefaultProps  = {{0.0F, 0.0F}, {0.0F, 0.0F}, 0.0F, 0.0F, {0.0F, 0.0F}, {0.0F, 0.0F}, {0.0F, 0.0F}, {0.0F, 0.0F}} ;
   const vxtBaseClsPolygonPointsCalc::InitData *pInitData = VXT_NULL;

   if (VXT_NULL == a_pInitData)
   {
      pInitData = &s_DefaultProps;
   }
   else
   {
      pInitData = static_cast<const vxtBaseClsPolygonPointsCalc::InitData*>(a_pInitData);
   }

   return VXT_NEW(vxtClsPolygonPointsCalc, (*pInitData));
}

//=============<vxtClsPolygonPointsCalcPlugin::s_vDeleteRTObject>==============
// 
//  Summary: Delete a RunTime Built Object.
// 
//  Return Value: None.
// 
//=============================================================================
void vxtClsPolygonPointsCalcPlugin::s_vDeleteRTObject(vxtRTObject *a_pObject)
{
   VXT_DELETE(a_pObject);
}




// END OF FILE

