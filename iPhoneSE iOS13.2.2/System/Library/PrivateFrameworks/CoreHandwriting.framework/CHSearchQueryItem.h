/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CHSearchQueryItem : NSObject {

	NSSet* _strokeIdentifiers;

}

@property (nonatomic,copy,readonly) NSSet * strokeIdentifiers;              //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSSet *)strokeIdentifiers;
-(id)initWithStrokeIdentifiers:(id)arg1 ;
-(BOOL)isEqualToSearchQueryItem:(id)arg1 ;
@end
