/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _SYSharedServiceDB;

@interface _SYWeakServiceDBRef : NSObject {

	NSString* _name;
	_SYSharedServiceDB* _db;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) _SYSharedServiceDB * db;              //@synthesize db=_db - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(_SYSharedServiceDB *)db;
-(void)setDb:(_SYSharedServiceDB *)arg1 ;
@end

