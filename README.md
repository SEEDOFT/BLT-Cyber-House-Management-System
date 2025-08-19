<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>BLT Cyber House Management System – README</title>
  <style>
    :root{
      --bg:#0f1220; --card:#13172a; --muted:#8ea1b2; --text:#e7ecf3; --accent:#6ea8fe; --ok:#7dd3fc; --warn:#fbbf24;
      --radius:14px;
    }
    *{box-sizing:border-box}
    html,body{margin:0;padding:0;background:var(--bg);color:var(--text);font-family:ui-sans-serif,system-ui,-apple-system,Segoe UI,Roboto,Inter,Arial,sans-serif;line-height:1.6}
    a{color:var(--ok);text-decoration:none} a:hover{opacity:.9;text-decoration:underline}
    code,pre{font-family:ui-monospace,SFMono-Regular,Menlo,Consolas,monospace}
    pre{background:#0b0e1a;border:1px solid #1b2140;padding:14px;border-radius:12px;overflow:auto}
    code.inline{background:#0b0e1a;border:1px solid #1b2140;padding:2px 6px;border-radius:6px}
    .wrap{max-width:980px;margin:0 auto;padding:28px}
    .card{background:var(--card);border:1px solid #1b2140;border-radius:var(--radius);padding:22px;margin:16px 0}
    .header{display:flex;gap:18px;align-items:center;flex-wrap:wrap}
    .logo{width:60px;height:60px;border-radius:14px;background:linear-gradient(135deg,var(--accent),var(--ok));display:flex;align-items:center;justify-content:center;color:#0a0d18;font-weight:800}
    h1{margin:.2rem 0 0;font-size:1.9rem}
    h2{margin:0 0 .6rem;font-size:1.25rem}
    h3{margin:1.2rem 0 .4rem;font-size:1.05rem;color:#dbe7ff}
    .muted{color:var(--muted)}
    .grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(260px,1fr));gap:14px}
    .kvs{display:grid;grid-template-columns:160px 1fr;gap:8px 14px}
    .pill{display:inline-block;padding:4px 10px;border-radius:999px;background:#0b1230;border:1px solid #203061;color:#bcd1ff;font-size:.85rem;margin-right:8px}
    .table{width:100%;border-collapse:separate;border-spacing:0;border:1px solid #1b2140;border-radius:12px;overflow:hidden}
    .table th,.table td{padding:10px 12px;border-bottom:1px solid #1b2140}
    .table th{background:#0e1330;text-align:left;font-weight:600}
    .table tr:last-child td{border-bottom:none}
    .callout{border-left:4px solid var(--warn);background:#1a1e33;padding:12px 14px;border-radius:10px}
    .foot{opacity:.8;font-size:.9rem}
    .btn{display:inline-block;background:var(--accent);color:#0b0e1a;font-weight:700;padding:10px 14px;border-radius:10px}
    ul{margin:.2rem 0 .8rem 1.2rem}
  </style>
</head>
<body>
  <div class="wrap">
    <div class="card header">
      <div class="logo" aria-hidden="true">BLT</div>
      <div>
        <h1>BLT Cyber House Management System</h1>
        <div class="muted">Windows Console application for managing cyber house operations with administrator and user roles.</div>
        <div style="margin-top:8px">
          <span class="pill">Windows Console Host</span>
          <span class="pill">Console 160×40</span>
          <span class="pill">Consolas / 20pt / 700</span>
        </div>
      </div>
    </div>

    <div class="card">
      <h2>Overview</h2>
      <p>
        The BLT Cyber House Management System provides a secure login flow for administrators and users, file-backed data operations,
        and guardrails such as enforced logout before exit to protect data consistency.
      </p>
      <div class="grid">
        <div>
          <h3>Features</h3>
          <ul>
            <li>🔑 Role-based access (Admin &amp; User)</li>
            <li>👤 User management: register, view, update, delete</li>
            <li>📂 Local file storage for records</li>
            <li>🚪 Requires logout before program exit</li>
          </ul>
        </div>
        <div>
          <h3>Console Settings</h3>
          <div class="kvs">
            <div class="muted">Window</div><div>160 × 40</div>
            <div class="muted">Font</div><div>Consolas</div>
            <div class="muted">Size</div><div>20</div>
            <div class="muted">Weight</div><div>700</div>
          </div>
        </div>
      </div>
    </div>

    <div class="card">
      <h2>Team</h2>
      <ul>
        <li>Koy Yotraboth</li>
        <li>Yong Bunleng</li>
        <li>Sam Sokunthea</li>
      </ul>
    </div>

    <div class="card">
      <h2>Demo Credentials</h2>
      <table class="table" role="table">
        <thead>
          <tr><th>Role</th><th>Username</th><th>Password</th></tr>
        </thead>
        <tbody>
          <tr><td>Administrator</td><td><code class="inline">Cyber</code></td><td><code class="inline">168</code></td></tr>
          <tr><td>User (Demo)</td><td><code class="inline">leng</code></td><td><code class="inline">168</code></td></tr>
        </tbody>
      </table>
      <h3>Login Guidelines</h3>
      <ul>
        <li>To log in as a user, verify credentials via <em>Administrator → View User Information</em>.</li>
        <li>Alternatively, register a new user through the Admin panel.</li>
      </ul>
    </div>

    <div class="card">
      <h2>Important Notes</h2>
      <div class="callout">
        <ul>
          <li><strong>Search, Update, and Delete</strong> require at least one existing record in the file.</li>
          <li>The program <strong>cannot be exited</strong> without logging out of the active account.</li>
        </ul>
      </div>
    </div>

    <div class="card">
      <h2>Repository Structure (Suggested)</h2>
      <pre><code>BLT-Cyber-House-Management/
├── src/                  # Source code
├── docs/                 # Documentation &amp; guides
├── assets/               # Screenshots, diagrams, etc.
├── LICENSE
└── README.html           # This file
</code></pre>
    </div>

    <div class="card">
      <h2>Getting Started</h2>
      <ol>
        <li>Clone the repository:
          <pre><code>git clone https://github.com/&lt;your-username&gt;/blt-cyber-house-management.git
cd blt-cyber-house-management</code></pre>
        </li>
        <li>Open the project in your preferred IDE (e.g., Visual Studio).</li>
        <li>Build and run in a <strong>Windows Console Host</strong> using the console settings above.</li>
      </ol>
      <p>
        <a class="btn" href="#" onclick="return false;">Download Latest Release</a>
        <span class="muted"> (replace with your release URL)</span>
      </p>
    </div>

    <div class="card">
      <h2>Screenshots (Optional)</h2>
      <p class="muted">Add images of login, admin panel, and user screens here.</p>
      <!-- <img src="assets/login.png" alt="Login Screen" width="100%"> -->
    </div>

    <div class="card">
      <h2>Contributing</h2>
      <ol>
        <li>Fork the repository</li>
        <li>Create a feature branch: <code class="inline">git checkout -b feature/your-feature</code></li>
        <li>Commit changes: <code class="inline">git commit -m "feat: add your feature"</code></li>
        <li>Push and open a Pull Request</li>
      </ol>
    </div>

    <div class="card">
      <h2>License</h2>
      <p>
        This project is distributed for <strong>educational purposes</strong>. You may modify and use it for learning or demonstration.
        (Add a formal LICENSE file if you prefer an open-source license such as MIT.)
      </p>
    </div>

    <div class="card foot">
      <div><strong>Thank you for using BLT Cyber House Management System.</strong> Best of luck with your operations!</div>
      <div class="muted" style="margin-top:6px">Last updated: August 13, 2024</div>
    </div>
  </div>
</body>
</html>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>BLT Cyber House Management System – README</title>
  <style>
    :root{
      --bg:#0f1220; --card:#13172a; --muted:#8ea1b2; --text:#e7ecf3; --accent:#6ea8fe; --ok:#7dd3fc; --warn:#fbbf24;
      --radius:14px;
    }
    *{box-sizing:border-box}
    html,body{margin:0;padding:0;background:var(--bg);color:var(--text);font-family:ui-sans-serif,system-ui,-apple-system,Segoe UI,Roboto,Inter,Arial,sans-serif;line-height:1.6}
    a{color:var(--ok);text-decoration:none} a:hover{opacity:.9;text-decoration:underline}
    code,pre{font-family:ui-monospace,SFMono-Regular,Menlo,Consolas,monospace}
    pre{background:#0b0e1a;border:1px solid #1b2140;padding:14px;border-radius:12px;overflow:auto}
    code.inline{background:#0b0e1a;border:1px solid #1b2140;padding:2px 6px;border-radius:6px}
    .wrap{max-width:980px;margin:0 auto;padding:28px}
    .card{background:var(--card);border:1px solid #1b2140;border-radius:var(--radius);padding:22px;margin:16px 0}
    .header{display:flex;gap:18px;align-items:center;flex-wrap:wrap}
    .logo{width:60px;height:60px;border-radius:14px;background:linear-gradient(135deg,var(--accent),var(--ok));display:flex;align-items:center;justify-content:center;color:#0a0d18;font-weight:800}
    h1{margin:.2rem 0 0;font-size:1.9rem}
    h2{margin:0 0 .6rem;font-size:1.25rem}
    h3{margin:1.2rem 0 .4rem;font-size:1.05rem;color:#dbe7ff}
    .muted{color:var(--muted)}
    .grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(260px,1fr));gap:14px}
    .kvs{display:grid;grid-template-columns:160px 1fr;gap:8px 14px}
    .pill{display:inline-block;padding:4px 10px;border-radius:999px;background:#0b1230;border:1px solid #203061;color:#bcd1ff;font-size:.85rem;margin-right:8px}
    .table{width:100%;border-collapse:separate;border-spacing:0;border:1px solid #1b2140;border-radius:12px;overflow:hidden}
    .table th,.table td{padding:10px 12px;border-bottom:1px solid #1b2140}
    .table th{background:#0e1330;text-align:left;font-weight:600}
    .table tr:last-child td{border-bottom:none}
    .callout{border-left:4px solid var(--warn);background:#1a1e33;padding:12px 14px;border-radius:10px}
    .foot{opacity:.8;font-size:.9rem}
    .btn{display:inline-block;background:var(--accent);color:#0b0e1a;font-weight:700;padding:10px 14px;border-radius:10px}
    ul{margin:.2rem 0 .8rem 1.2rem}
  </style>
</head>
<body>
  <div class="wrap">
    <div class="card header">
      <div class="logo" aria-hidden="true">BLT</div>
      <div>
        <h1>BLT Cyber House Management System</h1>
        <div class="muted">Windows Console application for managing cyber house operations with administrator and user roles.</div>
        <div style="margin-top:8px">
          <span class="pill">Windows Console Host</span>
          <span class="pill">Console 160×40</span>
          <span class="pill">Consolas / 20pt / 700</span>
        </div>
      </div>
    </div>

    <div class="card">
      <h2>Overview</h2>
      <p>
        The BLT Cyber House Management System provides a secure login flow for administrators and users, file-backed data operations,
        and guardrails such as enforced logout before exit to protect data consistency.
      </p>
      <div class="grid">
        <div>
          <h3>Features</h3>
          <ul>
            <li>🔑 Role-based access (Admin &amp; User)</li>
            <li>👤 User management: register, view, update, delete</li>
            <li>📂 Local file storage for records</li>
            <li>🚪 Requires logout before program exit</li>
          </ul>
        </div>
        <div>
          <h3>Console Settings</h3>
          <div class="kvs">
            <div class="muted">Window</div><div>160 × 40</div>
            <div class="muted">Font</div><div>Consolas</div>
            <div class="muted">Size</div><div>20</div>
            <div class="muted">Weight</div><div>700</div>
          </div>
        </div>
      </div>
    </div>

    <div class="card">
      <h2>Team</h2>
      <ul>
        <li>Koy Yotraboth</li>
        <li>Yong Bunleng</li>
        <li>Sam Sokunthea</li>
      </ul>
    </div>

    <div class="card">
      <h2>Demo Credentials</h2>
      <table class="table" role="table">
        <thead>
          <tr><th>Role</th><th>Username</th><th>Password</th></tr>
        </thead>
        <tbody>
          <tr><td>Administrator</td><td><code class="inline">Cyber</code></td><td><code class="inline">168</code></td></tr>
          <tr><td>User (Demo)</td><td><code class="inline">leng</code></td><td><code class="inline">168</code></td></tr>
        </tbody>
      </table>
      <h3>Login Guidelines</h3>
      <ul>
        <li>To log in as a user, verify credentials via <em>Administrator → View User Information</em>.</li>
        <li>Alternatively, register a new user through the Admin panel.</li>
      </ul>
    </div>

    <div class="card">
      <h2>Important Notes</h2>
      <div class="callout">
        <ul>
          <li><strong>Search, Update, and Delete</strong> require at least one existing record in the file.</li>
          <li>The program <strong>cannot be exited</strong> without logging out of the active account.</li>
        </ul>
      </div>
    </div>

    <div class="card">
      <h2>Repository Structure (Suggested)</h2>
      <pre><code>BLT-Cyber-House-Management/
├── src/                  # Source code
├── docs/                 # Documentation &amp; guides
├── assets/               # Screenshots, diagrams, etc.
├── LICENSE
└── README.html           # This file
</code></pre>
    </div>

    <div class="card">
      <h2>Getting Started</h2>
      <ol>
        <li>Clone the repository:
          <pre><code>git clone https://github.com/&lt;your-username&gt;/blt-cyber-house-management.git
cd blt-cyber-house-management</code></pre>
        </li>
        <li>Open the project in your preferred IDE (e.g., Visual Studio).</li>
        <li>Build and run in a <strong>Windows Console Host</strong> using the console settings above.</li>
      </ol>
      <p>
        <a class="btn" href="#" onclick="return false;">Download Latest Release</a>
        <span class="muted"> (replace with your release URL)</span>
      </p>
    </div>

    <div class="card">
      <h2>Screenshots (Optional)</h2>
      <p class="muted">Add images of login, admin panel, and user screens here.</p>
      <!-- <img src="assets/login.png" alt="Login Screen" width="100%"> -->
    </div>

    <div class="card">
      <h2>Contributing</h2>
      <ol>
        <li>Fork the repository</li>
        <li>Create a feature branch: <code class="inline">git checkout -b feature/your-feature</code></li>
        <li>Commit changes: <code class="inline">git commit -m "feat: add your feature"</code></li>
        <li>Push and open a Pull Request</li>
      </ol>
    </div>

    <div class="card">
      <h2>License</h2>
      <p>
        This project is distributed for <strong>educational purposes</strong>. You may modify and use it for learning or demonstration.
        (Add a formal LICENSE file if you prefer an open-source license such as MIT.)
      </p>
    </div>

    <div class="card foot">
      <div><strong>Thank you for using BLT Cyber House Management System.</strong> Best of luck with your operations!</div>
      <div class="muted" style="margin-top:6px">Last updated: August 13, 2024</div>
    </div>
  </div>
</body>
</html>
