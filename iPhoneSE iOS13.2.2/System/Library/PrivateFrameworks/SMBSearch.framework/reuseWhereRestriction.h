/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RestrictionProtocol.h>

@interface reuseWhereRestriction : NSObject <RestrictionProtocol> {

	int restrictId;
	unsigned ulType;
	unsigned weight;
	unsigned _resuseWhereID;

}

@property (assign) unsigned resuseWhereID;              //@synthesize resuseWhereID=_resuseWhereID - In the implementation block
@property (assign) int restrictId; 
@property (assign) unsigned ulType; 
@property (assign) unsigned weight; 
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)weight;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(id)initWithReuseWhereID:(unsigned)arg1 Weight:(unsigned)arg2 ;
-(int)restrictId;
-(void)setRestrictId:(int)arg1 ;
-(unsigned)ulType;
-(void)setUlType:(unsigned)arg1 ;
-(int)restrictionNumber;
-(unsigned)get_ultype;
-(unsigned)get_weight;
-(unsigned)resuseWhereID;
-(void)setResuseWhereID:(unsigned)arg1 ;
@end
