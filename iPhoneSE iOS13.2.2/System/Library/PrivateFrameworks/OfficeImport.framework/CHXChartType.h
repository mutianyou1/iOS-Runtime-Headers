/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXChartType : NSObject
+(int)chdGroupingFromXmlGroupingElement:(xmlNode*)arg1 ;
+(id)chdChartTypeFromXmlChartTypeElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)chdShapeTypeFromXmlShapeTypeElement:(xmlNode*)arg1 ;
+(Class)chxChartTypeClassWithXmlElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)stringWithGroupingEnum:(int)arg1 ;
+(void)resolveStyle:(id)arg1 state:(id)arg2 ;
+(void)prepareChartTypeForWriting:(id)arg1 ;
@end
