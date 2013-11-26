/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartMutableElementProperties.h>

@class TSCH3DChartModelEnumerator;

@interface TSCH3DChartBasicElementProperties : TSCH3DChartMutableElementProperties {

	TSCH3DChartModelEnumerator* mEnumerator;
	tvec2<int> mSize;

}

@property (nonatomic,readonly) tvec2<int> size; 
-(GeometryResource)geometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(void)resetWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS339)arg2 ;
-(void)createResources;
-(id)texcoordsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(GeometryResource)boundsGeometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)normalsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(void)dealloc;
-(tvec2<int>)size;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id).cxx_construct;
@end
