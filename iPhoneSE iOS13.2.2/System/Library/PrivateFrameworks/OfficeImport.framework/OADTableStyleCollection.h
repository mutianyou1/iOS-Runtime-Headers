/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSString;

@interface OADTableStyleCollection : NSObject {

	NSMutableArray* _styles;
	NSMutableDictionary* _styleMap;
	NSString* _defaultTableStyleId;

}

@property (nonatomic,copy) NSString * defaultTableStyleId;              //@synthesize defaultTableStyleId=_defaultTableStyleId - In the implementation block
-(id)init;
-(void)addTableStyle:(id)arg1 ;
-(id)tableStyles;
-(id)tableStyleWithId:(id)arg1 ;
-(NSString *)defaultTableStyleId;
-(void)setDefaultTableStyleId:(NSString *)arg1 ;
@end

