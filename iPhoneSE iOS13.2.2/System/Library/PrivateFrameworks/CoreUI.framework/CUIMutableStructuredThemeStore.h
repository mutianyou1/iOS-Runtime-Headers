/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStructuredThemeStore.h>

@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {

	NSString* _identifier;
	NSMutableDictionary* _memoryStore;
	NSMutableDictionary* _nameIdentifierStore;
	int _maxNameIdentifier;
	NSMutableDictionary* _apperanceNameIdentifierStore;
	int _maxApperanceNameIdentifier;
	NSMutableDictionary* _renditionInfoStore;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(id)imagesWithName:(id)arg1 ;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2 ;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3 ;
-(id)allImageNames;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 ;
-(const renditionkeyfmt*)keyFormat;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 ;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2 ;
-(id)defaultAppearanceName;
-(renditionkeytoken*)renditionKeyForAssetWithName:(id)arg1 withDescription:(id)arg2 ;
-(void)_addRenditionInfoForImageWithName:(id)arg1 andKey:(renditionkeytoken*)arg2 ;
-(void)_removeRenditionInfoForImageWithName:(id)arg1 ;
-(void)clearRenditionCache;
-(long long)maximumRenditionKeyTokenCount;
-(BOOL)usesCUISystemThemeRenditionKey;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 cursorHotSpot:(CGPoint*)arg2 ;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1 isFPO:(BOOL*)arg2 ;
-(id)renditionInfoForIdentifier:(unsigned short)arg1 ;
-(unsigned short)appearanceIdentifierForName:(id)arg1 ;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1 ;
-(id)appearances;
@end

