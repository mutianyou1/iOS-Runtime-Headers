/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBBorders : NSObject
+(int)convertXlBorderEnumToED:(int)arg1 ;
+(int)convertXlDiagStyleEnumToED:(int)arg1 ;
+(int)convertEDBorderEnumToXl:(int)arg1 ;
+(int)convertEDDiagonalEnumToXl:(int)arg1 ;
+(id)edBordersFromXlXf:(XlXf*)arg1 edResources:(id)arg2 ;
+(id)edBordersFromXlDXf:(XlDXf*)arg1 edResources:(id)arg2 ;
@end

