/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, Protocol;

@interface NFMultiDelegate : NSObject {

	NSHashTable* _children;
	Protocol* _delegateProtocol;

}

@property (nonatomic,readonly) NSHashTable * children;                   //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) Protocol * delegateProtocol;              //@synthesize delegateProtocol=_delegateProtocol - In the implementation block
@property (nonatomic,readonly) id delegate; 
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)delegate;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSHashTable *)children;
-(Protocol *)delegateProtocol;
-(id)initWithDelegate:(id)arg1 delegateProtocol:(id)arg2 ;
-(void)replaceDelegate:(id)arg1 withDelegate:(id)arg2 ;
@end

