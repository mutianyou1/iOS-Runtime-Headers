/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TestFlightCore/TestFlightCore-Structs.h>
@interface TFImageFetcher : NSObject {

	double _displayedScreenScale;

}

@property (nonatomic,readonly) double displayedScreenScale;              //@synthesize displayedScreenScale=_displayedScreenScale - In the implementation block
-(id)init;
-(id)_urlStringForIconArtwork:(id)arg1 ofSize:(CGSize)arg2 fileFormat:(id)arg3 ;
-(double)displayedScreenScale;
-(void)fetchIconArtwork:(id)arg1 ofSize:(CGSize)arg2 intoView:(id)arg3 animated:(BOOL)arg4 ;
@end

