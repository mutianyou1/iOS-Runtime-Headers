/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TUITypedStringCandidate : TIKeyboardCandidateSingle {

	NSString* _displayLabel;

}

@property (nonatomic,retain) NSString * displayLabel;              //@synthesize displayLabel=_displayLabel - In the implementation block
+(id)typedStringCandidateWithLocale:(id)arg1 typedString:(id)arg2 ;
-(id)label;
-(NSString *)displayLabel;
-(void)setDisplayLabel:(NSString *)arg1 ;
@end
