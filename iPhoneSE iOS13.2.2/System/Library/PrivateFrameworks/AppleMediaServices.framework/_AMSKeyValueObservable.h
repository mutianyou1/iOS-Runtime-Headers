/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSObservable.h>

@class NSObject, NSString;

@interface _AMSKeyValueObservable : AMSObservable {

	NSObject* _context;
	NSString* _keyPath;
	NSObject* _object;

}

@property (nonatomic,retain) NSObject * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * keyPath;                      //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic,__weak) NSObject * object;              //@synthesize object=_object - In the implementation block
-(NSObject *)object;
-(void)setObject:(NSObject *)arg1 ;
-(BOOL)cancel;
-(NSString *)keyPath;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject *)context;
-(void)setContext:(NSObject *)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(BOOL)sendCompletion;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 ;
@end
