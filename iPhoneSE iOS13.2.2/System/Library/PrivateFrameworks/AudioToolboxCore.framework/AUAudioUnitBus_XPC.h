/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AUAudioUnitBus.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AUAudioUnit_XH, NSXPCConnection, AVAudioFormat, NSArray;

@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding> {

	AUAudioUnit_XH* _audioUnit;
	NSXPCConnection* _remoteAUXPCConnection;
	unsigned _scope;
	unsigned _element;
	AVAudioFormat* _format;
	NSArray* _supportedChannelLayoutTags;
	BOOL _removingObserverWithContext;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(BOOL)isEnabled;
-(id)format;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(void)propertyChanged:(id)arg1 ;
@end
