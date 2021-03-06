/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedback.h>
#import <UIKitCore/_UIFeedbackDiscretePlayable.h>

@class NSString;

@interface _UIDiscreteFeedback : _UIFeedback <_UIFeedbackDiscretePlayable> {

	BOOL _highPriority;
	long long _type;

}

@property (assign,nonatomic) long long type;                                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHighPriority,nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
+(id)type;
+(BOOL)supportsSecureCoding;
+(id)discreteFeedbackForType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)_effectiveSystemSoundID;
-(unsigned long long)_effectiveEventType;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_debugDictionary;
-(id)_playableProtocol;
-(BOOL)isPlaying;
-(BOOL)isHighPriority;
@end

