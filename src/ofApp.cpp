#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setupGui(){
    GM.setup();
}


//--------------------------------------------------------------
void ofApp::drawGui(ofEventArgs & args){
    GM.draw();
}

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    
//    bpLogo_trans.load("bp_logo_04_antialiasing.png");
//    imgWidth = ofGetWidth() * 0.6;
//    imgHeight = ofGetWidth() * 0.6;

    
    SM.scenes.push_back( new blankScene() );
     SM.scenes.push_back( new logoScene() );
    SM.scenes.push_back( new basicLineDrawing() );
    SM.scenes.push_back( new shaderNoise() );
    SM.scenes.push_back( new shaderVertical() );
    SM.scenes.push_back( new shaderLine() );
    SM.scenes.push_back( new shaderSun() );
    SM.scenes.push_back( new shaderHotShower() );
    SM.scenes.push_back( new shaderCrystal() );
    SM.scenes.push_back( new shaderOil() );
    SM.scenes.push_back( new shaderNoiseBlur() );
    SM.scenes.push_back( new shaderWater() );
    SM.scenes.push_back( new shaderCircleNoise() );
    SM.scenes.push_back( new shaderPlasma() );
//    SM.scenes.push_back( new shaderStar() );
    SM.scenes.push_back( new shaderWhitehole() );
    SM.scenes.push_back( new shaderJupiter() );
    SM.scenes.push_back( new shaderDiffusion() );
    SM.scenes.push_back( new shaderTest() );
    SM.setup();
    
    for (int i = 0; i < SM.scenes.size(); i++){
        SM.scenes[i]->GM = &GM;
    }

    HouseBlackCover.setup();
}



//--------------------------------------------------------------
void ofApp::update(){
    
    SM.update();
    GM.update();

    
}




//--------------------------------------------------------------
void ofApp::draw(){
    
    
    SM.draw();

    ofPushStyle();
    ofEnableAlphaBlending();
    if( SM.currentScene != 0 && SM.currentScene != 1 ) {
        HouseBlackCover.draw();
    }
    ofDisableAlphaBlending();
    ofPopStyle();
    

//    ofEnableBlendMode(OF_BLENDMODE_ALPHA);
//    float _x = (ofGetWidth() - imgWidth) * 0.5;
//    float _y = (ofGetHeight() - imgHeight) * 0.5;
//    bpLogo_trans.draw(_x, _y, imgWidth, imgHeight);
//    ofDisableBlendMode();

}




//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == OF_KEY_RIGHT){
        SM.nextScene();
    }

    if (key == OF_KEY_LEFT){
        SM.previousScene();
    }

    if (key == OF_KEY_UP){
        SM.loadShader();
    }

    SM.glitchOn(key);
    
}




//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    SM.glitchOff(key);

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
