/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUserDefaults, NSMutableDictionary;

@interface AXMSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _defaults;
	NSMutableDictionary* _queue_settingObservers;

}

@property (assign,nonatomic) BOOL writeOutInputImages; 
@property (assign,nonatomic) BOOL writeOutOCRInputImages; 
@property (assign,nonatomic) BOOL writeOutScreenCaptures; 
+(id)settings;
-(id)_init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)writeOutScreenCaptures;
-(BOOL)writeOutInputImages;
-(void)_queue_removeObserver:(id)arg1 forSetting:(id)arg2 ;
-(void)addObserver:(id)arg1 forSeetting:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 forSetting:(id)arg2 ;
-(void)removeObserverForAllSettings:(id)arg1 ;
-(void)setWriteOutInputImages:(BOOL)arg1 ;
-(BOOL)writeOutOCRInputImages;
-(void)setWriteOutOCRInputImages:(BOOL)arg1 ;
-(void)setWriteOutScreenCaptures:(BOOL)arg1 ;
@end

