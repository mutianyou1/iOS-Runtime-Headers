/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject, MPSectionedCollection;

@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying> {

	BOOL _shouldLibraryAdd;
	MPModelObject* _referralObject;
	MPSectionedCollection* _modelObjects;

}

@property (nonatomic,copy) MPModelObject * referralObject;                    //@synthesize referralObject=_referralObject - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * modelObjects;              //@synthesize modelObjects=_modelObjects - In the implementation block
@property (assign,nonatomic) BOOL shouldLibraryAdd;                           //@synthesize shouldLibraryAdd=_shouldLibraryAdd - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelObject *)referralObject;
-(void)setReferralObject:(MPModelObject *)arg1 ;
-(BOOL)shouldLibraryAdd;
-(void)setShouldLibraryAdd:(BOOL)arg1 ;
-(MPSectionedCollection *)modelObjects;
-(void)setModelObjects:(MPSectionedCollection *)arg1 ;
@end
