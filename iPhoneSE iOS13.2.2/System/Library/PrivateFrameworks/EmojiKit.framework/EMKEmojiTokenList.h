/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmojiKit/EmojiKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface EMKEmojiTokenList : NSObject <NSCopying> {

	NSArray* _emojiTokenArray;

}

@property (readonly) NSArray * emojiTokenArray; 
@property (readonly) unsigned long long count; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)emojiTokenAtIndex:(unsigned long long)arg1 ;
-(id)initWithEmojiTokenArray:(id)arg1 ;
-(NSArray *)emojiTokenArray;
@end
