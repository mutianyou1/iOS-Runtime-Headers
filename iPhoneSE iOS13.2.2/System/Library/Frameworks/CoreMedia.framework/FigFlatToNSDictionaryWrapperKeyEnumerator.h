/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMedia/CoreMedia-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {

	/*function pointer*/void** _keys;
	int _keysCount;
	int _counter;

}
-(void)dealloc;
-(id)nextObject;
-(id)allObjects;
-(id)initWithFlatDictionary:(OpaqueFigFlatDictionaryRef)arg1 ;
@end

