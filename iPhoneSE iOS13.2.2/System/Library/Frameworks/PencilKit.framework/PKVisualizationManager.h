/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHVisualizationManagerDelegate.h>

@protocol PKVisualizationManager;
@class CHVisualizationManager, NSString;

@interface PKVisualizationManager : NSObject <CHVisualizationManagerDelegate> {

	id<PKVisualizationManager> _delegate;
	CHVisualizationManager* _chVisualizationManager;

}

@property (nonatomic,retain) CHVisualizationManager * chVisualizationManager;              //@synthesize chVisualizationManager=_chVisualizationManager - In the implementation block
@property (assign,nonatomic) BOOL recognitionStatusReportingEnabled; 
@property (assign,nonatomic,__weak) id<PKVisualizationManager> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)availableRecognitionStatusKeys;
+(id)localizedNameForRecognitionStatusKey:(id)arg1 ;
-(void)dealloc;
-(id<PKVisualizationManager>)delegate;
-(void)setDelegate:(id<PKVisualizationManager>)arg1 ;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)visualizationManager:(id)arg1 needsDisplayInRect:(CGRect)arg2 ;
-(void)visualizationManagerNeedsDisplay:(id)arg1 ;
-(void)visualizationManagerDidUpdateSessionStatus:(id)arg1 ;
-(CHVisualizationManager *)chVisualizationManager;
-(id)valueForRecognitionStatusKey:(id)arg1 ;
-(BOOL)recognitionStatusReportingEnabled;
-(void)setRecognitionStatusReportingEnabled:(BOOL)arg1 ;
-(void)setChVisualizationManager:(CHVisualizationManager *)arg1 ;
@end
