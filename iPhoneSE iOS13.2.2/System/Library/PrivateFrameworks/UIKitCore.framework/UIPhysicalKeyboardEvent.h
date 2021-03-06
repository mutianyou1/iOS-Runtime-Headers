/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPressesEvent.h>

@class NSString;

@interface UIPhysicalKeyboardEvent : UIPressesEvent {

	BOOL _canPrivatize;
	BOOL __externalEvent;
	int _inputFlags;
	NSString* _modifiedInput;
	NSString* _unmodifiedInput;
	NSString* _shiftModifiedInput;
	NSString* _commandModifiedInput;
	NSString* _markedInput;
	long long _modifierFlags;
	NSString* _privateInput;
	long long _privateModifierFlags;
	NSString* _hint;

}

@property (nonatomic,retain) NSString * _modifiedInput;                                //@synthesize modifiedInput=_modifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _unmodifiedInput;                              //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _shiftModifiedInput;                           //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _commandModifiedInput;                         //@synthesize commandModifiedInput=_commandModifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _markedInput;                                  //@synthesize markedInput=_markedInput - In the implementation block
@property (nonatomic,retain) NSString * _privateInput;                                 //@synthesize privateInput=_privateInput - In the implementation block
@property (nonatomic,retain) NSString * _hint;                                         //@synthesize hint=_hint - In the implementation block
@property (assign,nonatomic) long long _modifierFlags;                                 //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (assign,nonatomic) long long _privateModifierFlags;                          //@synthesize privateModifierFlags=_privateModifierFlags - In the implementation block
@property (nonatomic,readonly) long long _gsModifierFlags; 
@property (nonatomic,readonly) BOOL _isKeyDown; 
@property (nonatomic,readonly) BOOL _isGlobeKey; 
@property (nonatomic,readonly) BOOL _isModifierKey; 
@property (nonatomic,readonly) BOOL _isARepeat; 
@property (nonatomic,readonly) long long _keyCode; 
@property (assign,nonatomic) int _inputFlags;                                          //@synthesize inputFlags=_inputFlags - In the implementation block
@property (assign,getter=_isExternalEvent,nonatomic) BOOL _externalEvent;              //@synthesize _externalEvent=__externalEvent - In the implementation block
+(id)_eventWithInput:(id)arg1 inputFlags:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)type;
-(long long)_modifierFlags;
-(id)_cloneEvent;
-(BOOL)_isGlobeKey;
-(BOOL)_isKeyDown;
-(NSString *)_unmodifiedInput;
-(long long)_gsModifierFlags;
-(int)_inputFlags;
-(long long)_keyCode;
-(void)set_inputFlags:(int)arg1 ;
-(NSString *)_modifiedInput;
-(void)set_modifiedInput:(NSString *)arg1 ;
-(void)set_hint:(NSString *)arg1 ;
-(void)set_markedInput:(NSString *)arg1 ;
-(void)_privatize;
-(NSString *)_commandModifiedInput;
-(void)set_modifierFlags:(long long)arg1 ;
-(BOOL)_isARepeat;
-(NSString *)_hint;
-(NSString *)_shiftModifiedInput;
-(void)set_unmodifiedInput:(NSString *)arg1 ;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(NSString *)_markedInput;
-(BOOL)_isModifierKey;
-(BOOL)_matchesKeyCommand:(id)arg1 ;
-(void)set_commandModifiedInput:(NSString *)arg1 ;
-(void)set_privateModifierFlags:(long long)arg1 ;
-(void)set_shiftModifiedInput:(NSString *)arg1 ;
-(void)set_privateInput:(NSString *)arg1 ;
-(long long)_privateModifierFlags;
-(NSString *)_privateInput;
-(BOOL)_isExternalEvent;
-(void)set_externalEvent:(BOOL)arg1 ;
@end

