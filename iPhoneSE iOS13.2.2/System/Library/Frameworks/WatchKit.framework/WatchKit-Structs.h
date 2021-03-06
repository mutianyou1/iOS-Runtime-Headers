/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned ndouble : 1;
	unsigned nint64 : 1;
	unsigned nuint64 : 1;
	unsigned nfloat : 1;
	unsigned nint32 : 1;
	unsigned nuint32 : 1;
	unsigned subtype : 1;
	unsigned nbool : 1;
} SCD_Struct_SP1;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned duration : 1;
} SCD_Struct_SP5;

typedef struct {
	unsigned errorCode : 1;
	unsigned status : 1;
} SCD_Struct_SP6;

typedef struct {
	CLLocationCoordinate2D field1;
	CGPoint field2;
} SCD_Struct_WK7;

typedef struct {
	CGPoint field1;
	CGPoint field2;
} SCD_Struct_WK8;

