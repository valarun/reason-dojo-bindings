import React from react;

const Leonardo = ({ superPowers }) => {
    return (
        <div>
        <h1>I'm Leonardo 🐢</h1>
        <ul>
            {
                superPowers.map(superPower =>  <li>{superPower}</li>)
            }
        </ul>
    </div>
    );
};

export default Leonardo;