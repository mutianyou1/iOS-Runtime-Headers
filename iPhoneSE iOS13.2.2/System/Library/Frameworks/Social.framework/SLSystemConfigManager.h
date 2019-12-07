/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@class NSString;

@interface SLSystemConfigManager : NSObject {

	void* _prefs;
	BOOL _notifyForExternalChangeOnly;
	int _applySkipCount;
	NSString* _serviceType;

}
+(id)sharedInstanceForCallbackWhileLocked:(void*)arg1 ;
+(id)sharedInstanceForServiceType:(id)arg1 ;
-(void)dealloc;
-(void)_keepAlive;
-(void)_tearDown;
-(void*)_getValueForKey:(id)arg1 ;
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
-(id)initWithServiceType:(id)arg1 ;
-(void)_notifyTarget:(unsigned)arg1 ;
-(void)_initializeSystemConfigPrefs:(id)arg1 ;
-(void)_synchronize;
-(void)_setCallback:(/*function pointer*/void*)arg1 withContext:(SCD_Struct_SL0*)arg2 ;
-(void)_refresh;
-(void)setCachedUsername:(id)arg1 ;
-(id)cachedUsername;
@end
