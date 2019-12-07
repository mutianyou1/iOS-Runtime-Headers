/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>
#import <libobjc.A.dylib/NTKComplicationCollectionObserver.h>
#import <libobjc.A.dylib/NTKCompanionAppLibraryObserver.h>

@class CLKComplicationTemplate, NTKComplicationCollection, NTKCompanionComplicationDataSource, NTKCompanionAppLibrary, NSString;

@interface NTKCompanionRemoteComplicationDataSource : NTKComplicationDataSource <NTKComplicationCollectionObserver, NTKCompanionAppLibraryObserver> {

	CLKComplicationTemplate* _complicationTemplate;
	NTKComplicationCollection* _complicationCollection;
	NTKCompanionComplicationDataSource* _stocksDataSource;
	NTKCompanionAppLibrary* _appLibrary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3 ;
-(void)dealloc;
-(void)_invalidate;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(void)_activeDeviceChanged;
-(void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2 ;
-(void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2 ;
-(void)complicationCollectionDidLoad:(id)arg1 ;
-(void)_loadCollection;
-(BOOL)_remoteIsCompanion;
-(id)_templateFromApp:(id)arg1 ;
-(void)_invalidateIfComplicationCorrespondsToApp:(id)arg1 ;
-(void)appLibrary:(id)arg1 didAddApp:(id)arg2 ;
-(void)appLibrary:(id)arg1 didUpdateApp:(id)arg2 ;
@end
