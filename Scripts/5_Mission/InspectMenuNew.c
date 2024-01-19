modded class InspectMenuNew
{
	override static void UpdateItemInfoLiquidType(Widget root_widget, EntityAI item)
	{
		if ( item.IsInherited( ZombieBase ) || item.IsInherited( Car ) ) return;
		
		ItemBase item_base = ItemBase.Cast( item );
		
		if( item_base && item_base.GetQuantity() > 0 && item_base.IsBloodContainer() )
		{
			BloodContainerBase blood_container = BloodContainerBase.Cast( item_base );
			
			if( blood_container.GetBloodTypeVisible() )
			{
				string type;
				bool positive;
				string blood_type_name = BloodTypes.GetBloodTypeName(blood_container.GetLiquidType(), type, positive);
				WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_blood: " + blood_type_name, Colors.COLOR_LIQUID);
			}
			else
			{
				WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_blood", Colors.COLOR_LIQUID);
			}
		}
		else if( item_base && item_base.GetQuantity() > 0 && item_base.IsLiquidContainer() )
		{
			int liquid_type = item_base.GetLiquidType();
			
			switch(liquid_type)
			{
				case LIQUID_WATER:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_water", Colors.COLOR_LIQUID);
					break;
				}
					
				case LIQUID_RIVERWATER:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_river_water", Colors.COLOR_LIQUID);
					break;
				}
					
				case LIQUID_VODKA:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_vodka", Colors.GRAY);
					break;
				}
				
				case LIQUID_BEER:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_beer", Colors.YELLOW);
					break;
				}
				
				case LIQUID_GASOLINE:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_gasoline", 0xE6E6B9);
					break;
				}
				
				case LIQUID_DIESEL:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_diesel", 0xE6E6B9);
					break;
				}
				
				case LIQUID_DISINFECTANT:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_disinfectant", Colors.GRAY);
					break;
				}
	
				case LIQUID_SALINE:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_saline", Colors.COLOR_LIQUID);
					break;
				}
				
				#ifdef Distiller // My Fuel Distiller Mod
				case LIQUID_ETHANOL:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "ETHANOL", Colors.ETHANOLLIQUID);
					break;
				}
				#endif
				
				case LIQUID_AVIATIONFUELLIQUID1:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid1", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID2:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid2", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID3:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid3", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID4:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid4", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID5:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid5", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID6:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid6", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID7:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid7", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID8:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid8", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID9:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid9", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID10:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid10", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID11:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid11", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID12:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid12", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID13:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid13", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID14:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid14", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID15:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid15", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID16:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid16", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID17:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid17", 0xE6E6B9);
					break;
				}
				case LIQUID_AVIATIONFUELLIQUID18:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid18", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID19:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid19", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID20:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid20", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID21:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid21", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID22:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid22", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID23:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid23", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID24:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid24", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID25:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid25", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID26:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid26", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID27:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid27", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID28:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid28", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID29:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid29", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID30:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid30", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID31:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid31", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID32:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid32", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID33:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid33", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID34:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid34", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID35:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid35", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID36:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid36", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID37:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid37", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID38:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid38", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID39:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid39", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID40:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid40", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID41:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid41", 0xE6E6B9);
					break;                                                 
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID42:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid42", 0xE6E6B9);
					break;
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID43:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid43", 0xE6E6B9);
					break;
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID44:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid44", 0xE6E6B9);
					break;
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID45:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid45", 0xE6E6B9);
					break;
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID46:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid46", 0xE6E6B9);
					break;
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID47:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid47", 0xE6E6B9);
					break;
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID48:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid48", 0xE6E6B9);
					break;
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID49:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid49", 0xE6E6B9);
					break;
				}                                                          
				case LIQUID_AVIATIONFUELLIQUID50:                          
				{                                                          
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "Liquid50", 0xE6E6B9);
					break;
				}
				
				default:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "ERROR", Colors.COLOR_LIQUID);
					break;
				}
			}
		}
		else
		{
			WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "");
		}
	}
};