/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeSchema.h>

@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
-(long long)schemaVersion;
-(const SCD_Struct_CU30*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU33*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU33*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU33*)elementDefinitionWithName:(id)arg1 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU32*)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU32*)arg1 ;
-(const SCD_Struct_CU30*)categoryForElementDefinition:(const SCD_Struct_CU33*)arg1 ;
-(const SCD_Struct_CU33*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU33*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU33*)effectDefinitionWithName:(id)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU32*)arg1 ;
-(unsigned long long)materialDefinitionCount;
-(const SCD_Struct_CU33*)_sortedElementDefinitions;
-(const SCD_Struct_CU33*)_sortedEffectDefinitions;
@end
