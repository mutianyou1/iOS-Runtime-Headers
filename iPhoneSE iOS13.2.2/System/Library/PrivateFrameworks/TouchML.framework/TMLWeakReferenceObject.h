/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TMLWeakReferenceObject : NSObject {

	id _object;

}

@property (nonatomic,__weak,readonly) id object;              //@synthesize object=_object - In the implementation block
+(id)weakReferenceWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)object;
-(id)initWithObject:(id)arg1 ;
@end

