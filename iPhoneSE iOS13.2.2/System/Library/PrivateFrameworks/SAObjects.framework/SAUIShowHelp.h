/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIShowHelp : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * text; 
+(id)showHelp;
+(id)showHelpWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)speakableText;
-(id)encodedClassName;
-(void)setSpeakableText:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end

