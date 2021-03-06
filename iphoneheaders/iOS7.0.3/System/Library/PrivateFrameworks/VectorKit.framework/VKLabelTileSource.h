/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSetBackedTileSource.h>

@interface VKLabelTileSource : VKTileSetBackedTileSource {

	shared_ptr<vk::LabelManager>* _labelManager;
	BOOL _localizeLabels;
	int _labelScaleFactor;

}

@property (assign,nonatomic) BOOL localizeLabels;               //@synthesize localizeLabels=_localizeLabels - In the implementation block
@property (assign,nonatomic) int labelScaleFactor;              //@synthesize labelScaleFactor=_labelScaleFactor - In the implementation block
-(void)dealloc;
-(id).cxx_construct;
-(BOOL)localizeLabels;
-(void)setLocalizeLabels:(BOOL)arg1 ;
-(int)labelScaleFactor;
-(void)setLabelScaleFactor:(int)arg1 ;
-(id)initWithTileSet:(id)arg1 labelManager:(const shared_ptr<vk::LabelManager>*)arg2 ;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(int)defaultMaximumZoomLevel;
-(int)_labelTileType;
-(void).cxx_destruct;
@end

