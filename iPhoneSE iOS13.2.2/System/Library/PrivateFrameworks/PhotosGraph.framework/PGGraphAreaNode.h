/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphLocationNaming.h>
#import <libobjc.A.dylib/PGGraphLocationCoordinates.h>

@class NSString, PGGraphLocationNode;

@interface PGGraphAreaNode : PGGraphNode <PGGraphLocationNaming, PGGraphLocationCoordinates> {

	CLLocationCoordinate2D _centroidCoordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D centroidCoordinate;                  //@synthesize centroidCoordinate=_centroidCoordinate - In the implementation block
@property (readonly) BOOL isBlacklisted; 
@property (readonly) NSString * fullname; 
@property (readonly) PGGraphLocationNode * stateOrBiggerParentLocationNode; 
@property (readonly) NSString * shortenedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocationCoordinate2D)coordinate;
-(BOOL)isBlacklisted;
-(NSString *)fullname;
-(id)addressNodes;
-(PGGraphLocationNode *)stateOrBiggerParentLocationNode;
-(BOOL)diameterIsLargerThanDiameter:(double)arg1 ;
-(NSString *)shortenedName;
-(CLLocationCoordinate2D)centroidCoordinate;
-(void)setCentroidCoordinate:(CLLocationCoordinate2D)arg1 ;
@end

