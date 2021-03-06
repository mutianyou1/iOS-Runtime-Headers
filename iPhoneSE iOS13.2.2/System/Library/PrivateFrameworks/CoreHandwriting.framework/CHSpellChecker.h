/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AppleSpell, CHSpellCheckerErrorModel;

@interface CHSpellChecker : NSObject {

	AppleSpell* _spellServer;
	CHSpellCheckerErrorModel* _errorModel;

}

@property (nonatomic,retain) CHSpellCheckerErrorModel * errorModel;              //@synthesize errorModel=_errorModel - In the implementation block
+(id)sharedSpellServer;
+(id)newErrorModel;
-(id)init;
-(void)dealloc;
-(BOOL)isWordInUserDictionaries:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)correctionsForString:(id)arg1 shouldUseErrorModel:(BOOL)arg2 forLocale:(id)arg3 ;
-(CHSpellCheckerErrorModel *)errorModel;
-(void)setErrorModel:(CHSpellCheckerErrorModel *)arg1 ;
@end

